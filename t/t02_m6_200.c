section "t02_m6_200"{
    Message_TextSpeed(8);
    Message_DispMsg(1);
    if (Parameter_GetCh1Param(6, 302) == 1){
        Background_Bg_GS2("BG_EX150_CO_1", #1, #1, 0);
        Screen_WipeIn(2);
        System_Wait(120);
        System_Call_GS2("T02", "M6", 211);
        System_Call_GS2("T02", "M6", 221);
        }
    else {
        Screen_ClearScreen();
        Background_Bg_GS2("BG_ED013_SP_1", #1, #1, 1);
        System_Wait(5);
        System_Call_GS2("T02", "M6", 210);
        System_Call_GS2("T02", "M6", 221);
        }
    }
