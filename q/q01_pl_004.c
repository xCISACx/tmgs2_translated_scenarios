section "q01_pl_004"{
    Background_Bg_GS2("BG_SCB20_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_Who(0);
    Message_MsgDisp("主人公", "Now today...\nOkay, I'll go look at the souvenirs.");
    if (System_GlobalWork(2, 1) == 1){
        System_Call_GS2("Q31", "M1", 0);
        System_Call_GS2("Q32", "M1", 0);
        System_Call_GS2("Q33", "M1", 0);
        System_Call_GS2("Q34", "M1", 0);
        }
    else if (System_GlobalWork(2, 1) == 2){
        System_Call_GS2("Q31", "M2", 0);
        System_Call_GS2("Q32", "M2", 0);
        System_Call_GS2("Q33", "M2", 0);
        System_Call_GS2("Q34", "M2", 0);
        }
    else if (System_GlobalWork(2, 1) == 3){
        System_Call_GS2("Q31", "M3", 0);
        System_Call_GS2("Q32", "M3", 0);
        System_Call_GS2("Q33", "M3", 0);
        System_Call_GS2("Q34", "M3", 0);
        }
    else if (System_GlobalWork(2, 1) == 4){
        System_Call_GS2("Q31", "M4", 0);
        System_Call_GS2("Q32", "M4", 0);
        System_Call_GS2("Q33", "M4", 0);
        System_Call_GS2("Q34", "M4", 0);
        }
    else if (System_GlobalWork(2, 1) == 5){
        System_Call_GS2("Q31", "M5", 0);
        System_Call_GS2("Q32", "M5", 0);
        System_Call_GS2("Q33", "M5", 0);
        System_Call_GS2("Q34", "M5", 0);
        }
    else if (System_GlobalWork(2, 1) == 7){
        System_Call_GS2("Q31", "M7", 0);
        System_Call_GS2("Q32", "M7", 0);
        System_Call_GS2("Q33", "M7", 0);
        System_Call_GS2("Q34", "M7", 0);
        }
    else if (System_GlobalWork(2, 1) == 10){
        System_Call_GS2("Q31", "G1", 0);
        System_Call_GS2("Q32", "G1", 0);
        System_Call_GS2("Q33", "G1", 0);
        System_Call_GS2("Q34", "G1", 0);
        }
    else if (System_GlobalWork(2, 1) == 11){
        System_Call_GS2("Q31", "G2", 0);
        System_Call_GS2("Q32", "G2", 0);
        System_Call_GS2("Q33", "G2", 0);
        System_Call_GS2("Q34", "G2", 0);
        }
    else if (System_GlobalWork(2, 1) == 12){
        System_Call_GS2("Q31", "G3", 0);
        System_Call_GS2("Q32", "G3", 0);
        System_Call_GS2("Q33", "G3", 0);
        System_Call_GS2("Q34", "G3", 0);
        }
    else if (System_GlobalWork(2, 1) == 13){
        System_Call_GS2("Q31", "G4", 0);
        System_Call_GS2("Q32", "G4", 0);
        System_Call_GS2("Q33", "G4", 0);
        System_Call_GS2("Q34", "G4", 0);
        }
    else {
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("Q32", "PL", 0);
        System_Call_GS2("Q33", "PL", 0);
        System_Call_GS2("Q34", "PL", 0);
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
