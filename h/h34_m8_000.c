section "h34_m8_000"{
    Character_ChFace(0, 0, 10);
    if (Parameter_GetCh1Param(8, 130) < 4){
        Character_Chara_GS2(8, "M8_01F", 0);
        }
    else {
        Character_Chara_GS2(8, "M8_??F", 0);
        }
    if (Parameter_GetCh1Param(8, 130) < 4){
        Voice_PlayVoice("H3408000_H00000", 8, "H3408000_H00001");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oi, ｛主人公｝.\nWhat are you doing here?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nI have a practice contest with the\nTrack and Field Club...");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 2);
        Voice_PlayVoice("H3408000_H00100", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Ehh...\nSince you're here, maybe I should\nwatch.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Aren't you working right now...?");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H3408000_H00200", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... Don't be so strict.\nI was thinking of supporting my old\nschool.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Haha, then please support us!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(｛Masaki＊＊｝ is\nwatching...\nI have to do my best!)");
        }
    else {
        Voice_PlayVoice("H3408000_H00300", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Oh. Aren't you going for it.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝.\nDid you come to watch?");
        Character_BlinkStart(8, 3, (#1));
        Voice_PlayVoice("H3408000_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I wanted to see the way you run\nduring competitions.");
        Message_Who(0);
        Message_MsgDisp("主人公", "... Are you jeering me?");
        Character_BlinkStart(8, 0, (#1));
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3408000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "What are you saying? I'm serious....\nI won't be able to see it anywhere\nelse except here.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh?");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3408000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Alright! I'm here, so get fired up!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Y-Yes!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah, I'm determined now!\nI'll do my best!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
