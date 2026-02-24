section "h3a_m8_000"{
    if (Parameter_GetBkParam(3, 52) >= 320){
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("", 8, "H3A08000_H00200");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.\nCongrats on winning the\nchampionships!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Thank you very much!\nI still can't believe it...");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A08000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Haha, that face.\nShould I pinch you then?");
            Message_Who(0);
            Message_MsgDisp("主人公", "N-No, I will decline that offer.");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H3A08000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Pfft, I'm joking.");
            Character_ChFace(0, 2, 5);
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H3A08000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nThat moment when you cut through the\ntape...\nYou were really radiant.\nYour entire body was saying you were\nhappy.");
            Character_BlinkStart(8, 0, (#1));
            Voice_PlayVoice("H3A08000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It's amazing that you won the\nchampionship, but just seeing that\nwas amazing.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("H3A08000_H00700", 8, "H3A08000_H00701");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nYou worked hard,\n｛主人公｝.\nYou did your best, so congrats!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I'm really glad I stayed in the\nTrack and Field Club.\nThis is the best day!)");
            }
        }
    else {
        if (Parameter_GetCh1Param(8, 130) >= 4){
            Character_ChFace(0, 0, 9);
            Character_Chara_GS2(8, "M8_??F", 0);
            Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
            Screen_WipeIn(2);
            Voice_PlayVoice("H3A08000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That was too bad.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah... I lost.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H3A08000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Do you feel frustrated?");
            Message_Who(0);
            Message_MsgDisp("主人公", "... Yes.");
            Character_BlinkStart(8, 2, (#1));
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H3A08000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "... Right.\nBut I think this feeling will become\nyour strength in the future.");
            Character_BlinkStart(8, 0, (#1));
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H3A08000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "...\nWhen you feel like breaking down and\ncrying, remember that I'm here.\nIt should make you feel a little\nbetter.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H3A08000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "So, I will see you later.");
            Character_Chara_GS2(8, "NON");
            Message_Who(0);
            Message_MsgDisp("主人公", "(I lost...\nbut I'm glad I worked hard in the\nTrack and Field Club...)");
            }
        }
    Parameter_AddCh1Param(8, 86, 1);
    }
