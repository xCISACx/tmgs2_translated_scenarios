section "h36_m8_000"{
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
            Voice_PlayVoice("H3608000_H00000", 8, "H3608000_H00001");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You did it, ｛主人公｝.\nAmazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nThank you very much for cheering for\nme!");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("H3608000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "No problem!\nIsn't that great, Hanegasaki is #1.\nAs an alumnus, I'm proud!");
            Character_ChFace(0, 0, 11);
            Voice_PlayVoice("H3608000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Crap!\nI'm supposed to be delivering\nsomething!");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H3608000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'm going, then.\nDo your best next time, too!");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Masaki＊＊｝!)");
            }
        else {
            Voice_PlayVoice("H3608000_H00400", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You did it, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝. I won!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3608000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I saw. You run quite nicely.");
            Message_Who(0);
            Message_MsgDisp("主人公", "R-Really?");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H3608000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah.\nIt actually made me want to see it\nmore...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 4);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3608000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah... Uhh, you worked hard today!\nIf I have the chance, I'll come and\nwatch you, again.\nLater!");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(He left...\nBut I'm glad I did my best today!)");
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
            Voice_PlayVoice("H3608000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hmm. That was bad luck.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Right... I was so close, too...");
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H3608000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "......\nThere's still time until the real\ncompetition, right?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H3608000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You should train so that you aren't\njust \"close\".\nDo your best.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Right.\nI'll try harder from now on!)");
            }
        else {
            Voice_PlayVoice("H3608000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hmm. You were so close.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah...");
            Character_ChFace(0, 2, 0);
            Voice_PlayVoice("H3608000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nDon't make that \"I'm bummed\" face...");
            Message_Who(0);
            Message_MsgDisp("主人公", "But I...");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H3608000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... I like that face too, though.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 4, 0);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("H3608000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You know already, right?\nWhat you should do so that you can\nsmile, again...");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yes.");
            Character_BlinkStart(8, 0, (#1));
            Voice_PlayVoice("H3608000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Then do it.\nIf you wanna take the long way\naround, you can hang out with me.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...\nThank you very much.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3608000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "No worries. Later.");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright.\nI'll train harder and harder so that\nI'll win next time!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
