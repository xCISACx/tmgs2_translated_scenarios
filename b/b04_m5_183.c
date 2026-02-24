section "b04_m5_183"{
    Background_Bg_GS2("BG_NE650_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "SS_DSE_234_000");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Character_ChFace(0, 0, 10);
    Background_Bg_GS2("BG_NE600_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That movie was the best!", "That movie was so-so.", "That movie was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 4);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_BlinkStart(5, 3, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405183_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "I'm riled up now.\nI might not be able to sleep\ntonight.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 0, 11);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405183_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "That was a surprisingly cool movie.\nI'm so riled up that there might be\nsteam coming out of my head.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(5, 2, (#1), 1);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("B0405183_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Really?\nIt's too bad that you don't like\nthis kinda excitement...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    }
