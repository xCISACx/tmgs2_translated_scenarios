section "b04_m8_051"{
    int var0 = Date_GetDateOption(2, 13);
    if (var0 == 0){
        Character_Chara_GS2(8, "M8_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 5);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 3, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408051_H00000", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "... What a nice view...");
        Message_MsgSel("It's like a paradise floating in the sky!", "It's a giant 360 degree panorama!", "It's not actually in the sky!");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 4);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 0, 10);
            Character_BlinkStart(8, 2, (#1), 2);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408051_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ah, yeah.\nIt seems like watching the sunset\nhere would be good.\nLet's watch it next time.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yes!\nI made the perfect impression!!)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 0, 3);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408051_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "It might be okay to have times where\nyou don't wanna do anything.\nIt seems like we can just space out.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 2);
            Voice_PlayVoice("B0408051_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hey, you...\nDon't say it like you've got no\nhopes or dreams!\nGeez...");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            }
        }
    else if (var0 == 1){
        Character_Chara_GS2(8, "M8_D?F", 0, 1, 0);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408051_H00400", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "This is a place I like.\nWhen I skip lectures, I come here.");
        Message_MsgSel("It's perfect for afternoon naps.", "Please don't skip work.", "Liking high places is just...");
        switch (Message_TextSelect()){
            case 0:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 5);
            Character_BlinkStart(8, 3, (#1), 2);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408051_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You're right.\nNapping feels unbelievably good～.");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 1:
            Date_InData_Date(124, 1);
            Date_InData_Date(321, 2);
            Character_ChFace(0, 2, 2);
            Character_BlinkStart(8, 3, (#1), 1);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0408051_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hey, hey. You're so strict.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
            break ;
            case 2:
            Date_InData_Date(124, 0);
            Date_InData_Date(321, 3);
            Character_ChFace(0, 2, 2);
            Character_ChFace(0, 3, 1);
            Voice_PlayVoice("B0408051_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Hey, you～...\nEven if you had no hard feelings,\ntalking like that is what causes\nmisunderstandings.\nCareful what you say.");
            Message_Who(0);
            Message_MsgDisp("主人公", "(Argh～ Damn, I'm such an idiot!\nI made the worst impression～)");
            break ;
            }
        }
    else if (var0 == 2){
        Character_Chara_GS2(8, "M8_D?F", 0, 1, 0);
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(8, 2, (#1));
        Character_ChFace(0, 3, 3);
        Background_Bg_GS2("BG_WF510_?_0", 1, #1, 0);
        Screen_WipeIn(2);
        Voice_PlayVoice("B0408051_H00800", #1, "");
        Message_Who(8);
        Message_MsgDisp("Masaki", "I wonder how many meters this place\nis off the ground.\nThe people and cars look so tiny.");
        Character_ChFace(0, 7, 0);
        Message_MsgSel("It's more enjoyable looking at the sky.", "I can't look. It's scary!", "They really look like toys.");
        switch (Message_TextSelect()){
            case 0:
            if (Parameter_GetCh1Param(8, 130) <= 3){
                Date_InData_Date(124, 1);
                Date_InData_Date(321, 3);
                Character_BlinkStart(8, 0, (#1), 1);
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 2);
                Voice_PlayVoice("B0408051_H00900", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Really?\nWell, it depends on the person.\nLooking at the sky isn't always the\nbest.");
                Message_Who(0);
                Message_MsgDisp("主人公", "(Ugh... I made a bad impression.)");
                }
            else {
                Date_InData_Date(124, 5);
                Date_InData_Date(321, 1);
                Character_ChFace(0, 2, 3);
                Character_ChFace(0, 3, 4);
                Voice_PlayVoice("B0408051_H01000", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "The sky... Huh.\nI didn't notice that.");
                Message_Who(0);
                Message_MsgDisp("主人公", "You haven't been looking at it?");
                Character_ChFace(0, 2, 0);
                Character_ChFace(0, 3, 5);
                Voice_PlayVoice("B0408051_H01100", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Yeah.\nI look at the ground instead of the\nsky.\nMy eyes just look down instead of\nup.");
                Message_Who(0);
                Message_MsgDisp("主人公", "Then it would be your first time\ntoday?");
                Character_ChFace(0, 2, 5);
                Character_BlinkStart(8, 3, (#1));
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0408051_H01200", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "Yeah....\nLooking up at it for the first time\nwith you will be a good memory.");
                Message_Who(0);
                Message_MsgDisp("主人公", "...\nAre you being serious when you say\nthat?");
                Character_BlinkStart(8, 0, (#1));
                Character_ChFace(0, 2, 1);
                Character_ChFace(0, 3, 3);
                Voice_PlayVoice("B0408051_H01300", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "I am, I am.\nIt's a memory of being advised to\nlook up at the sky and you not\nlistening to what I'm saying.");
                Character_ChFace(0, 7, 0);
                Character_ChFace(0, 0, 10);
                Voice_PlayVoice("B0408051_H01400", #1, "");
                Message_Who(8);
                Message_MsgDisp("Masaki", "It's so fun being with you.\nI discover new things every day.\nSo just stay the way you are.");
                Message_Who(0);
                Message_MsgDisp("主人公", "O-Okay...");
                Message_Who(0);
                Message_MsgDisp("主人公", "(It feels like rather than being a\ngood memory, all I am is\ninteresting...)");
                }
            break ;
            case 1:
            Date_InData_Date(124, 3);
            Date_InData_Date(321, 1);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_BlinkStart(8, 0, (#1), 2);
            Character_ChFace(1, 2, 2);
            Character_ChFace(1, 3, 3);
            Character_ChFace(1, 4, 1);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408051_H01500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "What's with you～? Take a look.\nC'mon, look.\nLook down there♪");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Yeah! I made a good impression.)");
            Message_SkinshipSet(0);
            break ;
            case 2:
            Date_InData_Date(124, 2);
            Date_InData_Date(321, 2);
            Character_Chara_GS2(8, "M8_??F", 0, 1, 1);
            Character_ChFace(1, 2, 3);
            Character_ChFace(1, 3, 0);
            Message_PauseSkinship();
            Voice_PlayVoice("B0408051_H01600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "\"I wanna transform into a monster\nand rampage!\"\nIs what you're thinking, right?\nI'm right, aren't I?");
            Message_ResumeSkinship();
            Message_SkinshipSet(1);
            Message_Who(0);
            Message_MsgDisp("主人公", "(Uhh, I made an okay impression.)");
            Message_SkinshipSet(0);
            break ;
            }
        }
    Message_CloseMsg();
    Screen_WipeOut(2);
    Screen_ClearScreen();
    }
