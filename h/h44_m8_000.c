section "h44_m8_000"{
    if (Parameter_GetCh1Param(2, 25) == 1){
        if (Parameter_GetCh1Param(8, 130) < 4){
            Character_ChFace(0, 2, 3);
            Character_ChFace(0, 3, 2);
            Character_Chara_GS2(8, "M8_01F", 0);
            }
        else {
            Character_ChFace(0, 0, 0);
            Character_Chara_GS2(8, "M8_??F", 0);
            }
        if (Parameter_GetCh1Param(8, 130) < 4){
            Voice_PlayVoice("H4408000_H00000", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Huh, ｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nWhat is the matter?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H4408000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I just happened to be here and saw a\nbaseball game on, so I came here.\nI didn't think you'd be here.");
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H4408000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Is this a practice game?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yes it is.");
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4408000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I see.\nSince I'm here, maybe I'll cheer\nthem on a bit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Please do!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... ｛Masaki＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4408000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yo. How are things?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Everyone in the Baseball Club is in\nperfect form!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4408000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "No, no. I meant you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? ... I'm fine.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("H4408000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That's good.\nIt means that you can cheer them on\nwell.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H4408000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'll be focusing on you then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... on me?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4408000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah.\nI'll be watching you, so don't be\nhalf assed about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I will not be half hearted!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4408000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Haha, that's the spirit.\nAh, it's about to start.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    else {
        Character_ChFace(0, 0, 0);
        if (Parameter_GetCh1Param(8, 130) < 4){
            Character_Chara_GS2(8, "M8_01F", 0);
            }
        else {
            Character_Chara_GS2(8, "M8_??F", 0);
            }
        if (Parameter_GetCh1Param(8, 130) < 4){
            Voice_PlayVoice("H4408000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, the Track and Field Club have\nthis youthful vibe about them.");
            Message_Who(0);
            Message_MsgDisp("主人公", "｛Masaki＊＊｝!\nAre you here to cheer on the Track\nand Field Club?");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("H4408000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "No, I just happened to be here and\nsaw you.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H4408000_H01200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Since I'm here, maybe I'll cheer\nthem on a bit.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Please do!");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        else {
            Voice_PlayVoice("", 8, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "｛主人公｝.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... ｛Masaki＊＊｝!");
            Character_ChFace(0, 0, 10);
            Voice_PlayVoice("H4408000_H01300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yo. How are things?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Everyone in the Track and Field Club\nis in perfect form!");
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 0);
            Voice_PlayVoice("H4408000_H01400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "No, no. I meant you.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh? ... I'm fine.");
            Character_ChFace(0, 0, 10);
            Character_BlinkStart(8, 3, (#1));
            Voice_PlayVoice("H4408000_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "That's good.\nIt means that you can cheer them on\nwell.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("H4408000_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I'll be focusing on you, then.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Eh... on me?");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4408000_H01700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah.\nI'll be watching you, so don't be\nhalf assed about it.");
            Message_Who(0);
            Message_MsgDisp("主人公", "I will not be half hearted!");
            Character_ChFace(0, 2, 0);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("H4408000_H01800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Haha, that's the spirit.\nAh, it's about to start.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Alright, I'll do my best to cheer!)");
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
