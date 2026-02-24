section "b03_m7_070"{
    if (Date_ChkDateOpen(19) == 1){
        Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 5);
        Background_Bg_GS2("BG_FP000_SP_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0307070_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's a remarkable day today.\nAs expected with the cherry blossom\nviewing.");
        Message_PauseSkinship();
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes, it really is.");
        Character_ChFace(1, 2, 0);
        Character_ChFace(1, 3, 3);
        Message_ResumeSkinship();
        Voice_PlayVoice("B0307070_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well then, shall we go?\nWe should join the others viewing\nthe cherry blossoms.");
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B05", "M7", 0);
        }
    else if (Date_GetDateOption(5)){
        Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Background_Bg_GS2("BG_FP000_AU_0", #1, #1, 0);
        Screen_WipeIn(2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0307070_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Is everyone gathered?\nLet the infiltration begin, at last.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Infiltration?");
        Character_ChFace(1, 0, 3);
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0307070_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Well, today is the Forest Park\nexploration party.\nThe mission is to find something\ninteresting.");
        SoundEffect_PlayStream(2, "SS_DSE_096_000");
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 0);
        Voice_PlayVoice("B0307070_G00400", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Sensei will create a mask with\nleaves.\nSo do not have the same one as\nSensei.");
        SoundEffect_PlayStream(3, "SE_NS_AL_910_003000");
        Character_ChFace(1, 2, 3);
        Character_ChFace(1, 3, 2);
        Voice_PlayVoice("B0307070_G00500", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "So ,let's break up for one hour.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Voice_PlayVoice("B0307070_W00600", #1, "");
        Message_Who(0);
        Message_MsgDisp("Students", "Okay!");
        Message_SkinshipSet(0);
        Message_CloseMsg();
        Screen_WipeOut(2);
        Screen_ClearScreen();
        System_Call_GS2("B04", "M7", 75);
        }
    }
