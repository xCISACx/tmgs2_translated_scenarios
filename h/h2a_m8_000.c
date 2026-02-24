section "h2a_m8_000"{
    if (Parameter_GetBkParam(2, 52) >= 320){
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H2A08000_H00300", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was good,\n｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!");
            Character_ChFace(0, 0, 6);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("H2A08000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nYou were more radiant than anyone\nelse on the field.\nI couldn't take my eyes off you...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 11);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("H2A08000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah, uhh...\nAs an alumnus, I'm proud to have a\njunior like you!\nThat's what I meant!");
            Message_Who(0);
            Message_MsgDisp("主人公", "You're praising me too much,\n｛Masaki＊＊｝!");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("H2A08000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Don't worry about it today.");
            Message_Who(0);
            Message_MsgDisp("主人公", "R...Really?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H2A08000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah, look. They're calling you.\nLet's have a party to celebrate\nlater.\nWe'll have a toast to you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay, thank you very much!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nLacrosse Club.\nI feel like the best today!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H2A08000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... That was too bad.\nYou were so close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Sorry.\nWe lost, even though you came here\nto support us...");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2A08000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nYou didn't do anything you need to\napologize for.\nRather, I feel like I should thank\nyou for moving me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "It was... emotionally moving?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H2A08000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah.\nEveryone on the team knows that you\ndid your best.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H2A08000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yet you're so hard on yourself.\nStand up tall and say, \"I did my\nvery best\"!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H2A08000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I'm glad I was here today.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2A08000_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I got to see you trying hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H2A08000_H01800", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah, laugh.\nYour smile is the best,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Okay...!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I stayed in the Lacrosse\nClub and did my very best...!)");
            }
        }
    Parameter_AddCh1Param(8, 86, 1);
    }
