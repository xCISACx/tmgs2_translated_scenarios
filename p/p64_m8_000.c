section "p64_m8_000"{
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, it went well!)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P6408000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You've worked hard～!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nHow did you find it?");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P6408000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah, it was a good performance.\nYou get a pass!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Masaki＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, that was a huge failure...)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P6408000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yo, you've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝...");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("P6408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Actually, I'm the one who worked\nhard, having to listen to that.\nI felt terrified.");
            Message_Who(0);
            Message_MsgDisp("主人公", "S-Sorry...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P6408000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Anyway, you've worked hard.\nYou might get chewed out at the\nafter meeting, but do your best.");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I should have been more diligent\ntowards practice...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, it went well!)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!");
            Voice_PlayVoice("P6408000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was good～.\nI'll give you a silver star.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Really?");
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P6408000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah.\nHalf way through I sang along with\nyou and the other people around me\nlaughed.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 3, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P6408000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I just happened to do it since you\nlooked so happy on stage.");
            Character_ChFace(0, 0, 3);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P6408000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But it wasn't just me who sang.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P6408000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I think making people do that kinda\nthing is amazing.\nThat's why you get a silver star.\nYou did well!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Masaki＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, that was a huge failure...)");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P6408000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...... Somehow...\nThe performance was all jumbled up.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("P6408000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It seems like you should be the\nperson who understands the reason\nwhy the performance was like that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P6408000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, cheer up.\nBut don't forget to do some\nreflection.\nAnd then you can keep moving on.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yes.");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P6408000_H01300", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, nice response.\nDo your best, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I must try harder with practice...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay, it went well!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P6408000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "So you were an amazing one.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh?");
            Character_ChFace(0, 0, 3);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P6408000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I had goosebumps the whole time.\nI didn't think this kinda thing\nwould give me goosebumps, I was\nshocked.");
            Character_BlinkStart(8, 0, (#1));
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P6408000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I was kinda touched.\nI'm seriously glad I came to listen.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Masaki＊＊｝!)");
            }
        else {
            System_Wait(60);
            Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
            Screen_WipeIn(2);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, that was a huge failure...)");
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝...");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝...");
            Character_ChFace(0, 2, 5);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P6408000_H01800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It was bad luck that your last\nperformance ended up like that.");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nBecause of my lack of practice, I\nstood in the way of everyone's\nsuccess...");
            Character_ChFace(0, 2, 2);
            Voice_PlayVoice("P6408000_H01900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nWell, to that extent, it's an\nimportant memory for you.\nEven though it might be painful for\nyou right now.");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P6408000_H02000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Won't it be better if it becomes\nsomething you can laugh about later?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P6408000_H02100", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That is how people climb the stages\nto adulthood.\nDo your best, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh...\nI surely should have tried\nharder...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
