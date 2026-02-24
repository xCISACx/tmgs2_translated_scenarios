section "b16_m3_014"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 2);
    Contact_SChFace(0, 3, 3);
    Voice_PlayVoice("XC_03_00_C00500", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "No poking fun at my glasses.\nI'd have trouble walking straight on\nthis path without them.");
    Message_MsgSel("Okay, sorry.", "Eh～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 0, 10);
        Contact_SBlinkStart(0, 2, (#1));
        Voice_PlayVoice("XC_03_00_C00600", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Haha, thank you.\nI won't be able to see you, who\nlikes teasing me so much.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 11);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_03_00_C00700", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "Hey, s-stop it at once!\nAnd you're too c... close!");
        break ;
        }
    Music_StopBGM(0, 40);
    }
