section "h14_m8_000"{
    Character_ChFace(0, 0, 0);
    if (Parameter_GetCh1Param(8, 130) < 4){
        Character_Chara_GS2(8, "M8_01F", 0);
        }
    else {
        Character_Chara_GS2(8, "M8_??F", 0);
        }
    if (Parameter_GetCh1Param(8, 130) < 4){
        Voice_PlayVoice("H1408000_H00000", 8, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yo, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nYou didn't...\ncome here to cheer, did you?");
        Character_ChFace(0, 2, 0);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("H1408000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Haha, correct!\nI wanted to see you, so I came.");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H1408000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "A practice match, huh...\nMaybe I should watch.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Aren't you in the middle of work?");
        Character_BlinkStart(8, 3, (#1));
        Voice_PlayVoice("H1408000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yeah, I'm on my way back from a\ndelivery.\nI'll let the store know, so it's\nfine.");
        Character_BlinkStart(8, 0, (#1));
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H1408000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Do your best so you won't be\nembarrassed in front of your senpai!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(For some reason, I feel\nenthusiastic.\nAlright, I'll give it my all!)");
        }
    else {
        Voice_PlayVoice("", 8, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nWhy are you here?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(8, 2, (#1));
        Voice_PlayVoice("H1408000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "You said there was a practice match,\nso I was a little curious.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Is that so?\nThank you very much for taking the\ntime to come here.");
        Character_BlinkStart(8, 0, (#1));
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("H1408000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "So how is it?\nDo they have a chance of winning?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes.\nEven though they look the way they\ndo, our Baseball Club is strong,\nSenpai!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("H1408000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Ehh, aren't you brimming with\nconfidence!\nThat's not bad. Do your best!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Even ｛Masaki＊＊｝ came\nhere to cheer them on.\nI have to do my best cheering them\non!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
