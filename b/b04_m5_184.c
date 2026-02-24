section "b04_m5_184"{
    Background_Bg_GS2("BG_NE660_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_BlinkStart(5, 3, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405184_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hmm, it was a little bit away from\nbeing awesome...\nThere were parts that needed a\nlittle more work.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Character_BlinkStart(5, 3, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405184_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah, it was heart-warming.\nMy chest is getting warmed up.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 9);
        Voice_PlayVoice("B0405184_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I liked it...\nIt will probably be a bittersweet\nmemory for me...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    }
