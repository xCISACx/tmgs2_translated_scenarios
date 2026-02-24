section "b16_m7_025"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 8);
    Contact_SChFace(0, 4, 0);
    Voice_PlayVoice("XC_07_00_G01900", #1, "");
    Message_Who(7);
    Message_MsgDisp("Wakaouji", "I think you were trying to bite\nSensei a little.");
    Message_MsgSel("Is that right?", "Yes～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G02000", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "Oh, I don't believe it.\nIf it were a moonlit night, I'd\nunderstand.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 9);
        Contact_SChFace(0, 4, 0);
        Voice_PlayVoice("XC_07_00_G02100", #1, "");
        Message_Who(7);
        Message_MsgDisp("Wakaouji", "I realize that threat didn't work...");
        break ;
        }
    Music_StopBGM(0, 40);
    }
