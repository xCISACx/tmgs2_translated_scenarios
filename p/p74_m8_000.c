section "p74_m8_000"{
    Background_Bg_GS2("BG_SC930_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_GetPl1Param(322) == 0){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nSomehow, it seems like it was a\nsuccess!)");
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P8408000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You've worked hard.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nHow did you find it?");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P8408000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You looked relaxed.\nI'm glad I could see your normal\nsmile.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Masaki＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I t-tripped.\nWhat a huge failure...)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝... Umm...");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P8408000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Having a chat after such an amazing\ntrip is the best!\nIsn't that what you're suited for?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...)");
            }
        }
    else if (Parameter_GetPl1Param(322) == 1){
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nSomehow, it seems like it was a\nsuccess!)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P8408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nHow did you find it?");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P8408000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Isn't it a result of practice?\nYour walk down the runway was\nperfect.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yay!\nI was complimented by\n｛Masaki＊＊｝!)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I t-tripped.\nWhat a huge failure...)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P8408000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Must be tough.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝......\nDid you see?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("P8408000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah, from start to finish.\nThat was an amazing trip.\nBut I'm taking off points.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh......");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("P8408000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "But the smile afterwards was good so\nit cancels out.\nEveryone applauded your smile.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P8408000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "The fact that you could still smile\nmeans that you pass.\nDon't worry about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh, but I should have practiced\nmore diligently...)");
            }
        }
    else {
        if (Parameter_bunka_jyu(0) == 1){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Thank gosh!\nSomehow, it seems like it was a\nsuccess!)");
            Character_ChFace(0, 0, 8);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P8408000_H00900", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nThat was good,\n｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Really?");
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("P8408000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Yeah.\nNot just me, a majority of the\naudiences' eyes were glued to the\nstage.");
            Character_ChFace(0, 0, 9);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P8408000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nAs expected, I should have gone back\nstage to lower the curtains...\n*Sigh*");
            Message_Who(0);
            Message_MsgDisp("主人公", "(...\nGenerally, I am being complimented,\nright?)");
            }
        else {
            Message_Who(0);
            Message_MsgDisp("主人公", "(I t-tripped.\nWhat a huge failure...)");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 3, (#1));
            Character_ChFace(0, 4, 1);
            Character_Chara_GS2(8, "M8_??F", 0);
            Voice_PlayVoice("P8408000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ha... Haha...");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...\nYou don't have to laugh at me...");
            Character_ChFace(0, 0, 0);
            Character_ChFace(0, 4, 1);
            Voice_PlayVoice("P8408000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Sorry. I'm a little relieved....\nYou look like an adult, but on the\ninside, you're still not there, yet.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P8408000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Well, this kinda thing will become a\ngood memory with time, so don't be\nso down!\nOkay?");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh...\nI should have practiced more\ndiligently...)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(8, 86, 1);
    }
