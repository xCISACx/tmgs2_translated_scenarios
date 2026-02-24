section "h26_m8_000"{
    int var0 = 0;
    var0 = Parameter_Rensyu_aft();
    if (var0 < 4){
        Character_ChFace(0, 0, 10);
        if (Parameter_GetCh1Param(8, 130) < 4){
            Character_Chara_GS2(8, "M8_01F", 0);
            }
        else {
            Character_Chara_GS2(8, "M8_??F", 0);
            }
        if (Parameter_GetCh1Param(8, 130) < 4){
            Voice_PlayVoice("H2608000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Nice win!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nThank you very much!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H2608000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Even just watching you guys win a\ngame feels good.");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("H2608000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I mean I feel this way because I\ndon't really ever see you working\nthat hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Gee, what do you mean by that?");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H2608000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Haha, I'm kidding!\nKeep this up and do your best in the\nreal games, too!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I was complimented by\n｛Masaki＊＊｝.\nI'm glad I did my best!)");
            }
        else {
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝!");
            Character_ChFace(0, 0, 6);
            Voice_PlayVoice("H2608000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You started getting better halfway\nthrough the match....\nI kinda couldn't stop watching you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "T-Thank you very much.");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("H2608000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "If you keep going at this rate,\nwon't you be able to go well in the\nreal games?\nDo your best!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, I was complimented.\nI'm glad I did my best!)");
            }
        }
    else {
        Character_ChFace(0, 0, 9);
        if (Parameter_GetCh1Param(8, 130) < 4){
            Character_Chara_GS2(8, "M8_01F", 0);
            }
        else {
            Character_Chara_GS2(8, "M8_??F", 0);
            }
        if (Parameter_GetCh1Param(8, 130) < 4){
            Voice_PlayVoice("H2608000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was too bad...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝.");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2608000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I know nothing about Lacrosse so\nthis might not sound credible, but I\nthink that you'll use this match to\nwin the next one.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H2608000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Anyway, you worked hard! Later.");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I have to try harder so we can win\nthe real matches...!)");
            }
        else {
            Voice_PlayVoice("H2608000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hmm. That was close...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.\nI thought that we did some good\nthings, though...");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H2608000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Right. You worked quite hard...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H2608000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But I kinda feel like you can do\nmore.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H2608000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Use this game as motivation to do\nwell next time!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right.\nI have to try a little harder!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
