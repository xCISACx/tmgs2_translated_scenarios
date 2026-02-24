section "b03_m3_200"{
    if (Date_ChkDateOpen(15) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1);
        Background_Bg_GS2("BG_WF530_SU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0303200_C00000", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Let us come back to this place after\nwe've finished changing.\nLet us aim to meet in 15 minutes\ntime.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 201);
        }
    else if (Date_ChkDateOpen(16) == 1){
        Character_Chara_GS2(3, "M3_??F", 0, 1, 1, 35);
        Background_Bg_GS2("BG_WF540_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0303200_C00100", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "... The sea breeze is cold.\nI feel slightly faint....\nLet us take a walk.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M3", 202);
        }
    }
