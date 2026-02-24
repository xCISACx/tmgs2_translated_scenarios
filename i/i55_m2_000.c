section "i55_m2_000"{
    Background_Bg_GS2("BG_AR500_?_0", 1, #1, 0);
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(2, "M2_??F", 0);
    Screen_WipeIn(2);
    if (Parameter_GetCh1Param(2, 130) <= 2){
        Voice_PlayVoice("", 2, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "｛主人公｝.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, welcome, ｛Shiba＊＊｝.\nAre you looking for anything...?");
        Character_ChFace(0, 0, 3);
        Character_BlinkStart(2, 3, (#1));
        Voice_PlayVoice("I5502000_B00000", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nI was passing by so I decided to\ncome in.\nIt's not like I need something.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh, how blunt...)");
        }
    else if (Parameter_GetCh1Param(2, 130) == 3){
        Message_Who(0);
        Message_MsgDisp("主人公", "｛Shiba＊＊｝.");
        Voice_PlayVoice("I5502000_B00100", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "...\nAre there any flowers that don't die\neasily?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Right... I would recommend a cactus.");
        Message_Who(0);
        Message_MsgDisp("主人公", "They're fine as long as you\noccasionally spray them with water.");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I5502000_B00200", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Ehh... don't you know a lot.\nYou're like a real florist.");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Well, I kind of am a real\nflorist...)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, ｛Shiba＊＊｝. Welcome.");
        Voice_PlayVoice("I5502000_B00300", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Hmph.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Eh? What is it?");
        Character_ChFace(0, 2, 4);
        Character_BlinkStart(2, 3, (#1));
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I5502000_B00400", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "Nothing....\nJust thinking that you're familiar\nwith the flowers.");
        Message_Who(0);
        Message_MsgDisp("主人公", "M-Maybe.");
        Character_BlinkStart(2, 2, (#1));
        Character_ChFace(0, 2, 5);
        Character_ChFace(0, 3, 3);
        Voice_PlayVoice("I5502000_B00500", #1, "");
        Message_Who(2);
        Message_MsgDisp("Shiba", "... Yeah.\nThis florist job suits you.");
        Message_Who(0);
        Message_MsgDisp("主人公", "Thanks...");
        Message_Who(0);
        Message_MsgDisp("主人公", "(...\nHe was complimenting me, right...?)");
        }
    Message_CloseMsg();
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(2, 86, 1);
    }
