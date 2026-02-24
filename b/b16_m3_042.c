section "b16_m3_042"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 11);
    Contact_SChFace(0, 4, 1);
    Voice_PlayVoice("XB_03_00_C02500", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "Ah, excuse me.\nI spaced out a little.");
    Message_MsgSel("Yeah, you did.", "No.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 2);
        Contact_SChFace(0, 3, 3);
        Contact_SChFace(0, 4, 1);
        Contact_SBlinkStart(0, 2, (#1));
        Voice_PlayVoice("XB_03_00_C02600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Haha, sorry.\nI was looking back on today.\nYour words, and your smile, too.");
        break ;
        case 1:
        Contact_SChFace(0, 2, 3);
        Contact_SChFace(0, 3, 0);
        Voice_PlayVoice("XB_03_00_C02700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Then do you want to ask me anything?\nI will do whatever I can to answer\nyour questions.");
        break ;
        }
    Music_StopBGM(0, 40);
    }
