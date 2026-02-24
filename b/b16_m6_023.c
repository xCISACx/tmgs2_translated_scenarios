section "b16_m6_023"{
    Screen_WipeIn(2);
    Music_FadeBGM(0, 48, 20);
    Contact_SChFace(0, 0, 10);
    Voice_PlayVoice("XC_06_00_F01300", #1, "");
    Message_Who(6);
    Message_MsgDisp("Amachi", "Your lips look soft, Senpai.");
    Message_MsgSel("Yeah, they are.", "No, they're not.");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(0, 2, 3);
        Contact_SChFace(0, 4, 1);
        Voice_PlayVoice("XC_06_00_F01400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Then can I confirm it? ... One day.");
        break ;
        case 1:
        Contact_SChFace(0, 0, 0);
        Voice_PlayVoice("XC_06_00_F01500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Maybe I should see if it's true or\nnot?\n... Kidding, it was a joke!");
        break ;
        }
    Music_StopBGM(0, 40);
    }
