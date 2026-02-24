section "b03_m7_080"{
    Character_Chara_GS2(7, "M7_17F", 0, 1, 1);
    Character_ChFace(0, 3, 1);
    Background_Bg_GS2("BG_FP300_CO_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0307080_G00000", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "... Achoo!");
    SoundEffect_PlayStream(2, "SE_NS_AL_910_003000");
    Character_ChFace(1, 2, 2);
    Character_ChFace(1, 3, 3);
    Voice_PlayVoice("B0307080_G00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "Okay, let's hurry up and get warm!\nLet's head for the greenhouse!");
    Voice_PlayVoice("B0307080_W00200", #1, "");
    Message_Who(0);
    Message_MsgDisp("Students", "Okay!");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "(Did he mean the botanical garden?)");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M7", 80);
    }
