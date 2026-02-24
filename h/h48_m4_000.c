section "h48_m4_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA12_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nYou came!");
            Character_ChFace(0, 4, 0);
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4804000_D00300", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Are you perhaps nervous...?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah, a little.");
            Character_BlinkStart(4, 0, (#1));
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4804000_D00400", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then I'll take some of your nerves\naway from you.");
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("H4804000_D00500", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "It's what I'm good at....\nWell, not really.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Haha, thanks. I'll do my best!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4804000_D00600", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Yeah. I'll see you later!");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah, I'm fired up!\nI'll do my best to cheer!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(4, 130) >= 4){
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(4, "M4_01F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 4, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh, ｛Hariya＊＊｝.\nYou came here to cheer!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4804000_D01000", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Well... kinda.\nI couldn't contain myself when I\nheard that these guys might become\nJapan's #1.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(4, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4804000_D01100", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "You must be happy to be able to\ncheer on the grand stage.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes! My heart is racing!");
            Character_BlinkStart(4, 0, (#1));
            Voice_PlayVoice("H4804000_D01200", #1, "");
            Message_Who(4);
            Message_MsgDisp("Hariya", "Then have lots of fun! ...\nI'll be cheering for you, too.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah! Thanks, ｛Hariya＊＊｝!");
            Character_Chara_GS2(4, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I really feel motivated, now...\nI'll do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
