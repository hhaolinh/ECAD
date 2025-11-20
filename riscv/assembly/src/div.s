.macro DEBUG_PRINT reg
csrw 0x800, \reg
.endm

.text
.global div              # Export the symbol 'div' so we can call it from other files
.type div, @function
div:
    addi sp, sp, -32     # Allocate stack space

    # store any callee-saved register you might overwrite
    sw   ra, 28(sp)      # Function calls would overwrite
    sw   s0, 24(sp)      # If t0-t6 is not enough, can use s0-s11 if I save and restore them
    # ...
  beq a1, x0, zend
  addi a4, x0, 32
  addi a2, x0, 0
  addi a3, x0, 0
loop:
  addi a4, a4, -1
  blt a4, x0, end
  slli a3, a3, 1
  srl t0, a0, a4
  andi t0, t0, 1
  or a3, a3, t0
  blt a1, a3, branch
  beq a1, a3, branch
  j loop
branch:
  sub a3, a3, a1
  addi t0, x0, 1
  sll t0, t0, a4
  or a2, a2, t0
  j loop
zend:
  addi a0, x0, 0
  addi a1, x0, 0
  j restore
end:
  addi a0, a2, 0
  addi a1, a3, 0
restore:
    DEBUG_PRINT a0
    DEBUG_PRINT a1

    # load every register you stored above
    lw   ra, 28(sp)
    lw   s0, 24(sp)
    # ...
    addi sp, sp, 32      # Free up stack space
    ret

