section "b04_m5_044"{
    Background_Bg_GS2("BG_WF440_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MN_E_SC_931_D00");
    Screen_WipeIn(2);
    System_TouchWait();
    Screen_WipeOut(2);
    SoundEffect_StopStream(2, 40);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(5, "M5_??F", 0, 1, 0);
    Character_ChFace(0, 2, 5);
    Character_BlinkStart(5, 2, (#1));
    Character_ChFace(0, 3, 0);
    Background_Bg_GS2("BG_WF400_CO_1", #1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("B0405044_E00000", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Hmm～.\nTruthfully, I don't think that it\nwas so amazing to the point you'd\ncall it the best...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 1);
        Character_BlinkStart(5, 2, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405044_E00100", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "It's a shame that we weren't as\nenthusiastic as the people on stage.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(5, "M5_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_BlinkStart(5, 3, (#1), 2);
        Character_ChFace(1, 3, 3);
        Message_PauseSkinship();
        Voice_PlayVoice("B0405044_E00200", #1, "");
        Message_Who(5);
        Message_MsgDisp("Chris", "Yeah...\nI won't say what, but I felt like it\nshould have been a little more\ndifferent.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        }
    }
