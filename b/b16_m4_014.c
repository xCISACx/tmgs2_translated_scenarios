section "b16_m4_014"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_04_00_D00500", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "You often stare at me like that,\ndon't you?");
    Message_MsgSel("Yeah.", "No, I don't.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 0);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XC_04_00_D00600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "These are the times when I think\nwords aren't needed....\nKeep looking.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 10);
        Voice_PlayVoice("XC_04_00_D00700", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Don't lie, I can see right through\nit.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
