switch(opcode){
                case 0x0:
                        printf("Is r\n");
                        switch(funct){
                                case SYSCALL:
                                        printf("Enter SYSCALL\n");
                                        if(CURRENT_STATE.REGS[2] == 10){
                                                RUN_BIT = FALSE;
                                        }
                                        break;
                        }
                break;
                case ADDIU:
                        printf("Enter ADDIU\n");
                        NEXT_STATE.REGS[rt] = CURRENT_STATE.REGS[rs] + immediate;
                        break;

                default :
                        printf("Invalid\n");
                        RUN_BIT = FALSE;
                        break;
        }
