section "b03_m6_050"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306050_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "The view looks good.\nWell, shall we go?");
        }
    else {
        Character_Chara_GS2(6, "M6_D?F", 0, 1, 1);
        Character_ChFace(1, 2, 4);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_WF500_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306050_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Oh, we're so high up!! Come on!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 51);
    }
