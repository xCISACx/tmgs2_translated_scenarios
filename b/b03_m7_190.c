section "b03_m7_190"{
    Character_Chara_GS2(7, "M7_06F", 0, 1, 1);
    Character_ChFace(1, 2, 0);
    Character_ChFace(1, 3, 5);
    Background_Bg_GS2("BG_TR100_AU_0", #1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("", 7, "B0307190_G00000");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "｛主人公｝, Fall is\ncoming very soon.\nI can tell by the Autumn-colored\nleaves.");
    Character_Chara_GS2(7, "NON");
    Message_Who(0);
    Message_MsgDisp("主人公", "Oh, ｛Wakaouji＊＊｝!\nThere are many wide mountains here.");
    Character_ChFace(1, 3, 3);
    Message_ResumeSkinship();
    Voice_PlayVoice("B0307190_G00100", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I'm sorry.\nI was summoned by the souvenir shop.\nOkay, let's go.");
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M7", 191);
    }
