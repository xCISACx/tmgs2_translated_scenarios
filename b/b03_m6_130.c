section "b03_m6_130"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 3);
        Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306130_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well then, where do you want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Let's see...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(1, 0, 3);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0306130_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "That sounds good. Then let's go.");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Background_Bg_GS2("BG_NE100_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306130_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Where do you want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Let's see...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(1, 0, 10);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0306130_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Okay! Well, let's go!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 130);
    if (Parameter_ChkSpEvent("D02", "M6", 0) == 1){
        System_Call_GS2("D02", "M6", 0);
        }
    }
