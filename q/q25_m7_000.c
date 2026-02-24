section "q25_m7_000"{
    System_Wait(30);
    SoundEffect_PlayStream(3, "SS_DSE_223_000");
    if ((Parameter_GetCh1Param(7, 130) <= 2) && (Parameter_GetPl1Param(312) == 7)){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(7, "M7_08F", 0);
        Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Voice_PlayVoice("Q2607000_G00200", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "It's you.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("Q2607000_G00300", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "... It's empty this time.\nDon't worry.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Aah, that was a surprise!\nSo that person a little while ago\nwas...)");
        }
    else {
        Character_ChFace(0, 0, 6);
        Character_ChFace(0, 4, 1);
        Character_Chara_GS2(7, "M7_08F", 0);
        Background_Bg_GS2("BG_SCB31_LI_2", #1, #1, 0);
        Screen_WipeIn(2);
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!");
        Voice_PlayVoice("Q2607000_G00000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I knew it was you a while ago.");
        Message_Who(0);
        Message_MsgDisp("主人公", "...\nWhy were you trying to hide if\nyou're a teacher?");
        Character_ChFace(0, 0, 10);
        Character_BlinkStart(7, 2, (#1));
        Character_ChFace(0, 4, 1);
        Voice_PlayVoice("Q2607000_G00100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Because I don't want anyone angry\nwith me despite my being a teacher.\nHahaha.");
        Character_Chara_GS2(7, "NON");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Aah, that was a surprise!\nSo that person a little while ago\nwas...)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(7, 86, 1);
    }
