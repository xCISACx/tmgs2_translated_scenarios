section "h8f_pl_000"{
    int var0;
    Background_Bg_GS2("BG_SCA81_WI_0", #1, #1, 0);
    Screen_WipeIn(2);
    SoundEffect_PlayStream(2, "SS_DSE_143_000");
    Message_Who(0);
    Message_MsgDisp("主人公", "My work in the Student Council has\nbeen recognized!\nI've been named an exemplary\nstudent!");
    Message_Who(0);
    Message_MsgDisp("主人公", "I'm glad that I continued doing my\nbest in the Student Council!");
    Message_CloseMsg();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(#1, 61, 10);
    var0 = Parameter_ExtChar(1, 6, 3, 1, 8);
    switch (var0){
        case 0:
        System_Call_GS2("H8G", "S1", 0);
        break ;
        case 1:
        System_Call_GS2("H8G", "M1", 0);
        break ;
        case 2:
        System_Call_GS2("H8G", "M2", 0);
        break ;
        case 3:
        System_Call_GS2("H8G", "M3", 0);
        break ;
        case 4:
        System_Call_GS2("H8G", "M4", 0);
        break ;
        case 5:
        System_Call_GS2("H8G", "M5", 0);
        break ;
        case 6:
        System_Call_GS2("H8G", "M6", 0);
        break ;
        case 7:
        System_Call_GS2("H8G", "M7", 0);
        break ;
        }
    }
