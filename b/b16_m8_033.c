section "b16_m8_033"{
    Contact_SChFace(1, 0, 2);
    Contact_SChFace(1, 0, (#1));
    Contact_SChFace(1, 4, 0);
    Contact_SChFace(1, 4, 0);
    Voice_PlayVoice("XC_08_00_H02700", #1, "");
    Message_Who(8);
    Message_MsgDisp("Masaki", "... You keep repeatedly touching me.\nYou fully understand what it means,\nright?");
    Message_MsgSel("Yes.", "No?");
    switch (Message_TextSelect()){
        case 0:
        Contact_SChFace(1, 0, 1);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 1);
        Contact_SChFace(1, 4, 1);
        Voice_PlayVoice("XC_08_00_H02800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Hey you...\nI don't know what's gonna happen.");
        break ;
        case 1:
        Contact_SChFace(1, 0, 3);
        Contact_SChFace(1, 0, (#1));
        Contact_SChFace(1, 4, 0);
        Contact_SChFace(1, 4, 0);
        Voice_PlayVoice("XC_08_00_H02900", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Then I'll tell you about it\nlater....\nDon't run away, okay?");
        break ;
        }
    }
