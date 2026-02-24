section "h38_m8_000"{
    if (Parameter_GetCh1Param(8, 130) >= 4){
        Character_ChFace(0, 0, 0);
        Character_Chara_GS2(8, "M8_??F", 0);
        Background_Bg_GS2("BG_SCA22_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("H3808000_H00400", 8, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Yo, ｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝...?\nDid you come here to support me?");
        Character_ChFace(0, 4, 0);
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H3808000_H00500", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "Well, what pulled me here is that\nit's your...\nIt's Hanegasaki Academy's time in\nthe limelight.");
        Character_ChFace(0, 2, 3);
        Character_ChFace(0, 3, 0);
        Voice_PlayVoice("H3808000_H00600", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I also like being on the edge, so I\nwanted to be on the edge a little\nmore.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ahaha, that sounds like you,\n｛Masaki＊＊｝.");
        Character_ChFace(0, 0, 3);
        Voice_PlayVoice("H3808000_H00700", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "...\nIt looks like you're not nervous.\nI'm relieved.");
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Masaki＊＊｝...");
        Character_ChFace(0, 2, 1);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("H3808000_H00800", 8, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I want to burn the image of your\nlast race in my mind.\nDo your best, ｛主人公｝!");
        Message_Who(0);
        Message_MsgDisp("主人公", "Yes! I will go!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Yeah!\nI have to show ｛Masaki＊＊｝\na good result!)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    }
