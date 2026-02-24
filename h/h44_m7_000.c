section "h44_m7_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(7, 130) <= 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nDid you come here to cheer?");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(7, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4407000_G00000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "No, I just happened to pass by.\nAre you cheering for the Baseball\nClub's game?\nDo your best.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He left......\nHuh, he's coming back???)");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("H4407000_G00100", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Speaking of which, I am free.\nI will cheer for them.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Wah! Thank you very much!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Somehow, I feel determined.\nAlright, I'll do my best to cheer!)");
            }
        else {
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Character_Chara_GS2(7, "M7_01F", 0);
            Voice_PlayVoice("H4407000_G00200", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hello, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝!\nDid you come here to cheer?");
            Voice_PlayVoice("H4407000_G00300", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Yes, because the Cheerleading Club's\ncheers are always funny.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... Funny?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4407000_G00400", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Sorry, I meant enjoyable.\nEven though I am not competing,\nhearing your voices makes me feel\nvigorous.");
            Voice_PlayVoice("H4407000_G00500", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Please give me your energy.\nDo your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, please leave it to us!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Wakaouji＊＊｝ also came, so\nI have to do my best!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(7, 130) <= 3){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("H4407000_G00600", 7, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Hello, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Wakaouji＊＊｝.\nDo your best today.");
            Voice_PlayVoice("H4407000_G00700", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Uhh, I am not an athlete, so I won't\nbe doing my best.\nI'm only watching over them so that\nthey don't get injured.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah... Is that so?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4407000_G00800", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "But your cheering will become the\nathletes' motivation.\nI leave it to you, Cheerleading\nClub.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes, please leave it to us!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Somehow, I feel determined.\nAlright, I'll do my best to cheer!)");
            }
        else {
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(7, "M7_17F", 0);
            Voice_PlayVoice("", 7, "H4407000_G00900");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "｛主人公｝, I have been\nwaiting!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝!\nPlease do your best!");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4407000_G01000", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "I am just an advisor so I won't be\nparticipating...\nBut if you say that, I will do my\nbest.");
            Character_BlinkStart(7, 3, (#1));
            Voice_PlayVoice("H4407000_G01100", 7, "H4407000_G01101");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "No matter how much effort the\nadvisor puts in, no one will\ncompliment me on it.\nI leave the cheering to you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, okay!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4407000_G01200", #1, "");
            Message_Who(7);
            Message_MsgDisp("Wakaouji", "Thank you. I will go now.");
            Character_Chara_GS2(7, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Wakaouji＊＊｝ is doing his\nbest...\nAlright, I'll cheer with all my\nmight!");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
