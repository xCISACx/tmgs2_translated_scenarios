section "b03_m6_080"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP300_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306080_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I smell a nice flower. Shall we go?");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP300_CO_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306080_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Are you interested in looking at\nflowers?\nWell, I hope that's good.\nAnyway, let's go.");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 80);
    }
