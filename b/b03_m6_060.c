section "b03_m6_060"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_FP200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306060_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Is there somewhere you want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Message_ResumeSkinship();
        Voice_PlayVoice("B0306060_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Alright, then let's go.");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(0, 3, 2);
        Background_Bg_GS2("BG_FP200_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306060_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Is there somewhere you want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Message_ResumeSkinship();
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(6, 2, (#1), 2);
        Voice_PlayVoice("B0306060_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Okay! Then let's go!");
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M6", 60);
    }
