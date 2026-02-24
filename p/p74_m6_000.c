section "p74_m6_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I somehow managed to\nsucceed.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
            Voice_PlayVoice("P8406000_F00000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "That was a great success!\nYou did good and didn't even fall\ndown!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I fell down. A real big mistake!)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝!");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
            Voice_PlayVoice("P8406000_F00100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Geez, you fell down wonderfully!\nI think the production was kind of\nflashy!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Voice_PlayVoice("P8406000_F00200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "It's over and done with.\nIt can't be helped, right?");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I somehow managed to\nsucceed.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!\nHey, how was it?");
            Voice_PlayVoice("P8406000_F00300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Yeah, you were very beautiful!");
            Message_Who(0);
            Message_MsgDisp("主人公", "The clothes?");
            Character_ChFace(0, 2, 0);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8406000_F00400", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Ahahaha! Of course, Senpai!\nIt was quite a wonderful appearance.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I fell down. A real big mistake!)");
            Voice_PlayVoice("", 6, "P8406000_F00500");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.\nAre you all right?");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...\nYes, I'm not injured.");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8406000_F00600", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "The clothes aren't!\nDidn't the last one tear?");
            Voice_PlayVoice("P8406000_F00700", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well about the clothes...\nMaybe if Senpai was safer, they\nwould have been nicer?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(｛Amachi＊＊｝ thought the\nshow was weird...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Good, I somehow managed to\nsucceed.)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝!");
            Voice_PlayVoice("P8406000_F00800", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, umm...\nYou were really beautiful...");
            Voice_PlayVoice("P8406000_F00900", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "For a moment...\nwell, looking at you made my heart\nbeat amazingly fast.\nAnd, umm...");
            Character_ChFace(0, 0, 0);
            Character_BlinkStart(6, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8406000_F01000", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Hey, Senpai.\nYou were a little umm...\nWas it nice putting on and seeing\nthrough a veil?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I-I fell down. A real big mistake!)");
            Voice_PlayVoice("", 6, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "｛主人公｝.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(6, 3, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(6, "M6_01F", 0);
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
            Voice_PlayVoice("P8406000_F01100", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "... I feel a little relieved.");
            Voice_PlayVoice("P8406000_F01200", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "You did that right on time.\nIf you hadn't, everyone would have\ncome to love Senpai...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Amachi＊＊｝...");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8406000_F01300", #1, "");
            Message_Who(6);
            Message_MsgDisp("Amachi", "Well, Senpai falling down and making\na fool out of herself was very\ninteresting, too!\n*Chuckles*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI'm having mixed feelings...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
