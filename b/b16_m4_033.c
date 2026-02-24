section "b16_m4_033"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 0);
    Voice_PlayVoice("XC_04_00_D02400", #1, "");
    Message_Who(4);
    Message_MsgDisp("Hariya", "I want to hug someone...\nHave you ever thought that?");
    Message_MsgSel("Yeah, I have.", "No, I haven't.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 9);
        Voice_PlayVoice("XC_04_00_D02500", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "Hey, who is that someone...\nIs it okay to do it without\nhesitation?");
        break ;
        case 1:
        Contact_SChFace(0, 2, 0);
        Contact_SChFace(0, 3, 3);
        Voice_PlayVoice("XC_04_00_D02600", #1, "");
        Message_Who(4);
        Message_MsgDisp("Hariya", "I have.\nI want to hug them so much they'll\nbreak.\nI want to protect them...\nWhat is this feeling?");
        break ;
        }
    Music_StopBGM(0, 40);
    }
