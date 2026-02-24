section "b03_m6_010"{
    if (Parameter_GetCh1Param(6, 130) <= 2){
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306010_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Well, where do you want to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Well...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Message_ResumeSkinship();
        Voice_PlayVoice("B0306010_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Okay, let's do so.");
        }
    else {
        Character_Chara_GS2(6, "M6_??F", 0, 1, 1);
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(6, 2, (#1), 2);
        Background_Bg_GS2("BG_WF100_?_0", 1, #1, 0);
        Music_PlayBGM(0, "MN_BGD_028_000", 127, 40);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0306010_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Where do you wish to go?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Let's see...");
        Message_Who(0);
        Message_MsgDisp("　　　", "　　　　　　・\n　　　　　　・\n　　　　　　・");
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(6, 2, (#1));
        Message_ResumeSkinship();
        Voice_PlayVoice("B0306010_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Okay! Then let's get going!");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(2);
    Screen_ClearScreen();
    if (Parameter_ChkSpEvent("B05", "M6", 3) == 0){
        System_Call_GS2("B04", "M6", 10);
        }
    else {
        System_Call_GS2("B05", "M6", 3);
        }
    }
