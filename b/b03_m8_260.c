section "b03_m8_260"{
    Character_Chara_GS2(8, "M8_D?F", 0, 1, 1);
    Character_ChFace(1, 2, 0);
    Character_ChFace(1, 3, 3);
    Background_Bg_GS2("BG_HO000_?_0", 1, #1, 0);
    Screen_WipeIn(2);
    Message_PauseSkinship();
    Voice_PlayVoice("B0308260_H00000", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "I've been waiting. I drove here.\nIt's a little confined in my car,\nbut please bear with it a little.");
    Message_ResumeSkinship();
    Message_SkinshipSet(1);
    Message_Who(0);
    Message_MsgDisp("主人公", "It's alright! I'll come with you.");
    Message_SkinshipSet(0);
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    System_Call_GS2("B04", "M8", 260);
    }
