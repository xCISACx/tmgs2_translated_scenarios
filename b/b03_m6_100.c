section "b03_m6_100"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
        Character_ChFace(1, 2, 0);
        Character_BlinkStart(6, 3, (#1), 2);
        Character_ChFace(1, 3, 3);
        Background_Bg_GS2("BG_FP500_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306100_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "I'm quite good at skating.\nI look forward to this!");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1, 35);
        Character_ChFace(1, 0, 10);
        Background_Bg_GS2("BG_FP500_WI_0", #1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0306100_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Leave the skating to me!\nLet's enter!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 100);
    }
