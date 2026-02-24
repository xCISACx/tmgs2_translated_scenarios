section "h48_m2_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_Chara_GS2(2, "M2_15F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝! Do your best!");
            Voice_PlayVoice("", 2, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "｛主人公｝.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4802000_B00900", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWill you be okay looking like that?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? What?");
            Character_BlinkStart(2, 0, (#1));
            Character_BlinkStart(2, 0, (#1));
            Voice_PlayVoice("H4802000_B01000", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "It's quite hot out on the stands.\nBe careful so you don't get a\nheatstroke, okay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Don't worry about me.\nIf the Baseball Club wins, I won't\neven be feeling the heat.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4802000_B01100", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "Okay.\nI'll come back to you after we win.\nJust wait.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright! I'll do my best to cheer!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(2, 130) >= 4){
            Character_Chara_GS2(2, "M2_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Shiba＊＊｝!\nDid you come here to cheer?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4802000_B01400", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Yeah.\nI came to see them become Japan's\n#1.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, it would be nice if they did\nbecome Japan's #1...");
            Character_BlinkStart(2, 3, (#1));
            Voice_PlayVoice("H4802000_B01500", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "...\nWhat's gonna happen if the\ncheerleaders don't look confident?");
            Character_ChFace(0, 0, 11);
            Character_BlinkStart(2, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4802000_B01600", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... Just enjoy it.\nEven if you are nervous, it's not a\ngood thing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Right. I should enjoy it.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4802000_B01700", #1, "");
            Message_Who(2);
            Message_MsgDisp("Shiba", "... That's the spirit.\nRelax the tense players with your\ncheering.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I feel really relaxed now...\nAlright, I'll do my best!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
