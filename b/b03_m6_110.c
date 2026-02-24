section "b03_m6_110"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP600_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306110_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well then, I need to change into a\ndifferent set of clothes.");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Background_Bg_GS2("BG_FP600_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306110_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "A change into a different set of\nclothes, it is!\nSo I'll be back in a dash, Senpai!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_ChkSpEvent("D99", "M6", 0) == 1){
        System_Call_GS2("D99", "M6", 0);
        }
    else {
        System_Call_GS2("B04", "M6", 110);
        }
    }
