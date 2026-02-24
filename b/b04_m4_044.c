section "b04_m4_044"{
    Background_Bg_GS2("BG_WF440_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MN_E_SC_931_D00");
    Screen_WipeIn(2);
    System_TouchWait();
    SoundEffect_StopStream(2, 40);
    Screen_WipeOut(2);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(4, "M4_??F", 0, 1, 0);
    Background_Bg_GS2("BG_WF400_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 0);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 0, 8);
        Voice_PlayVoice("B0404044_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I don't get it why you would say\nthat was great.\nJust zip it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
        break ;
        case 1:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 2);
        Character_ChFace(0, 0, 8);
        Character_BlinkStart(4, 2, (#1), 1);
        Voice_PlayVoice("B0404044_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "That's why it didn't work, strange\nevents are evolving.\nHonestly...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(4, 3, (#1), 2);
        Character_ChFace(1, 3, 1);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404044_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I couldn't care less.\nArgh, anyway, erase it from my\nmemory fast～.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
