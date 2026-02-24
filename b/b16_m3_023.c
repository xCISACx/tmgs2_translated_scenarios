section "b16_m3_023"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 2, 4);
    Contact_SChFace(0, 3, 1);
    Contact_SChFace(0, 4, 1);
    Voice_PlayVoice("XC_03_00_C01300", #1, "");
    Message_Who(3);
    Message_MsgDisp("Hikami", "You c-can't touch my lips so\nnonchalantly like that...");
    Message_MsgSel("Okay, sorry.", "Eh～...");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 4);
        Contact_SChFace(0, 3, 1);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_03_00_C01400", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "S-Sorry.\nI haven't studied this kind of thing\nenough...");
        break ;
        case 1:
        Contact_SChFace(0, 2, 4);
        Contact_SChFace(0, 3, 0);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_03_00_C01500", #1, "");
        Message_Who(3);
        Message_MsgDisp("Hikami", "I want to do that too...\nAh, no, that's not it.\nI haven't studied this enough, so\nwe'll leave it to next time!");
        break ;
        }
    Music_StopBGM(0, 40);
    }
