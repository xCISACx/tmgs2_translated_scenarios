section "p24_m6_000"{
    Character_ChFace(0, 0, 0);
    Character_Chara_GS2(6, "M6_01F", 0);
    Background_Bg_GS2("BG_SC920_LI_0", #1, #1, 0);
    Screen_WipeIn(2);
    if (Parameter_bunka_jyu(0) == 1){
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you for waiting.\nA special deluxe soda and a large\nice cream.");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P1406000_F00000", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Wah! Really, this is great service!\nSeriously, I'm happy.\nThank you, Senpai!");
        Character_ChFace(0, 0, 10);
        Voice_PlayVoice("P1406000_F00100", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Yeah, I'm happy now!\nThis ice cream's smoothness is the\nbest!\nIt was good to ask you, Senpai!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(I did it!\nI was praised by\n｛Amachi＊＊｝!)");
        }
    else {
        Message_Who(0);
        Message_MsgDisp("主人公", "Thank you for waiting.\nA special deluxe soda and a large\nice cream.");
        Voice_PlayVoice("P1406000_F00200", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Wah! Really, this is great service!\nThen I'll eat it right away...");
        Character_ChFace(0, 2, 2);
        Character_ChFace(0, 3, 1);
        Voice_PlayVoice("P1406000_F00300", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "... What is this?\nThis ice cream isn't sweet...\nDid you maybe give me cream cheese\ninstead?");
        Message_Who(0);
        Message_MsgDisp("主人公", "Ah, damn it!\nI have mistakened an ice cream for a\ncheese!");
        Voice_PlayVoice("P1406000_F00400", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "Just a minute!\nDid you suddenly serve me this drink\nas a game to punish me for foul\nplay?");
        Character_ChFace(0, 2, 2);
        Character_BlinkStart(6, 3, (#1));
        Character_ChFace(0, 3, 5);
        Voice_PlayVoice("P1406000_F00500", #1, "");
        Message_Who(6);
        Message_MsgDisp("Amachi", "You can take this back, Senpai.\nSenpai can drink it....\nI'm certainly leaving!");
        Message_Who(0);
        Message_MsgDisp("主人公", "(Ugh, big mistake...)");
        }
    Message_CloseMsg();
    Music_StopBGM(0, 40);
    Screen_WipeOut(1);
    Screen_ClearScreen();
    Parameter_AddCh1Param(6, 86, 1);
    }
