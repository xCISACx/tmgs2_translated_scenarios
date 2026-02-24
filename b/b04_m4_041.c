section "b04_m4_041"{
    Background_Bg_GS2("BG_WF410_CO_0", #1, #1, 0);
    SoundEffect_PlayStream(2, "MS_L_10_P63_S00");
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
        Date_InData_Date(124, 2);
        Date_InData_Date(321, 2);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_BlinkStart(4, 2, (#1), 2);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404041_D00000", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I didn't get it that much, but so\nfar so good.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
        Message_SkinshipSet(0);
        break ;
        case 1:
        Date_InData_Date(124, 3);
        Date_InData_Date(321, 1);
        Character_Chara_GS2(4, "M4_??F", 0, 1, 1);
        Character_ChFace(1, 0, 10);
        Message_PauseSkinship();
        Voice_PlayVoice("B0404041_D00100", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Yeah, it was so-so...\nBut I feel it could have been a bit\nof a blast.");
        Message_ResumeSkinship();
        Message_SkinshipSet(1);
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
        Message_SkinshipSet(0);
        break ;
        case 2:
        Date_InData_Date(124, 1);
        Date_InData_Date(321, 3);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(4, 2, (#1), 1);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("B0404041_D00200", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "It wasn't that boring.\nI heard a lot of songs that I\nalready knew.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
        break ;
        }
    }
