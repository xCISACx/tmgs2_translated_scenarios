section "h1a_m8_000"{
    if (Parameter_GetBkParam(1, 52) >= 320){
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H1A08000_H00300", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Congrats, ｛主人公｝!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much!\nIt was because you were supporting\nus, ｛Masaki＊＊｝...!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A08000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Whatcha saying?\nIsn't this because a person did\ntheir best for the team?");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H1A08000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Go get praised by them first.\nI'll be next.");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("H1A08000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Look at their faces.\nAh, I'm so glad I'm a Hanegasaki\ngraduate.");
            Character_ChFace(0, 4, 1);
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A08000_H00700", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nAnd above all, I'm glad I saw your\nsmile.\nCongrats, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad I continued being the\nBaseball Club's manager!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 8, "H1A08000_H01100");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝...\nThat was bad luck...");
            Message_Who(0);
            Message_MsgDisp("主人公", "...\nEven though they all did their best,\nwe lost.\nBut I don't regret it!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A08000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Those guys were good....\nBut there's no need to hold back.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh...?");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("H1A08000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It's not whether your role was big\nor small, anyone losing a game would\nfeel distressed and would wanna cry.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H1A08000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nWouldn't it be fine to cry with\nthose guys?");
            Character_BlinkStart(8, 0, (#1));
            Voice_PlayVoice("H1A08000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You're also fighting alongside them.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A08000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "If you wanna borrow my arm or chest,\njust say the word and I'll lend it\nto you!");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H1A08000_H01700", 8, "H1A08000_H01701");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You did your best,\n｛主人公｝.\nRest up today. I'll see you later.");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm glad that I came up to this\npoint with everyone...!)");
            }
        }
    Parameter_AddCh1Param(8, 86, 1);
    }
