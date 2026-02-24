section "b03_m6_120"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306120_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "There seems to be a lot of\ninteresting things!\nLet's go.");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Background_Bg_GS2("BG_FP700_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306120_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Wow...\nThis place is full of interesting\nthings!\nLet's hurry!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 120);
    }
