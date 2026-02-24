section "b04_m1_041"{
    Background_Bg_GS2("BG_WF410_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P63_S00");
    Screen_WipeIn(2);
    System_TouchWait();
    Screen_WipeOut(2);
    SoundEffect_StopStream(2, 40);
    Music_StopBGM(0, 40);
    Character_Chara_GS2(1, "M1_??F", 0, 1, 0);
    Character_ChFace(0, 0, 3);
    Background_Bg_GS2("BG_WF400_?_1", 1, #1, 0);
    Screen_WipeIn(2);
    Message_MsgSel("That event was the best!", "That event was so-so.", "That event was disappointing.");
    switch (Message_TextSelect()){
        case 0:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401041_A00000", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "Yeah, listening to classical music\nlive is really different from\nlistening to a CD.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(1, "M1_??F", 0, 1, 1);
        Character_ChFace(1, 2, 2);
        Character_ChFace(1, 3, 0);
        Message_PauseSkinship();
        Voice_PlayVoice("B0401041_A00100", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "It would've been better if there\nwere a few more songs that I knew.\nOf course, that's my problem.");
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
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("B0401041_A00200", #1, "");
        Message_Who(1);
        Message_MsgDisp("Saeki", "I quite liked it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    }
