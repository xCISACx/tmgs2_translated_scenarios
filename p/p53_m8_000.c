section "p53_m8_000"{
    int var0 = 0;
    if (Parameter_GetPl1Param(322) == 0){
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(8, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(A little more work to go before the\ndisplay!\nMy heart is racing.)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Music_PlayBGM(0, "MN_C_08_000_D02", 127, 40);
            Voice_PlayVoice("P5308000_H00000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, ｛Masaki＊＊｝!\nIs something wrong?");
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P5308000_H00100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You have an exhibit to show, right?\nI came to see that.");
            Character_BlinkStart(8, 0, (#1));
            Voice_PlayVoice("P5308000_H00200", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You said that Himeko-senpai's a\nmodel?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ah, yes.");
            Character_ChFace(0, 2, 1);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5308000_H00300", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "I don't know what you painted, but\nHimeko-senpai's angry thunderbolts\nwill come to strike you～.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Ugh...");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5308000_H00400", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, is it soon?");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, yeah! I need to go for a while!");
            }
        Character_Chara_GS2(8, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(34, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else if (Parameter_GetPl1Param(322) == 1){
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(8, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(I want various people to see the\nwork everyone made.)");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Music_PlayBGM(0, "MN_C_08_000_D02", 127, 40);
            Voice_PlayVoice("P5308000_H00500", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yo.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, ｛Masaki＊＊｝!\nYou came to visit?");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5308000_H00600", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Yeah. What did you make this year?");
            Message_Who(0);
            Message_MsgDisp("主人公", "A sculpture.\nIt's about legends, so I made a\nmermaid.");
            Character_ChFace(0, 2, 5);
            Character_ChFace(0, 3, 3);
            Voice_PlayVoice("P5308000_H00700", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Ooh...\nI can't wait to see what mermaid it\nis.");
            Character_ChFace(0, 0, 3);
            Voice_PlayVoice("P5308000_H00800", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Oh, is it time already?");
            Message_Who(0);
            Message_MsgDisp("主人公", "*Giggles* Let's just wait and see.");
            }
        Character_Chara_GS2(8, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(35, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    else {
        Background_Bg_GS2("BG_SC950_LI_0", #1, #1, 0);
        Screen_WipeIn(2);
        if (Parameter_GetCh1Param(8, 130) >= 3){
            Message_Who(0);
            Message_MsgDisp("主人公", "(Wow, I'm amazed.\nA lot of guests coming.)");
            Voice_PlayVoice("P5308000_H00900", #1, "");
            Message_Who(8);
            Message_MsgDisp("？？？", "Woah! What's with this crowd!");
            Message_Who(0);
            Message_MsgDisp("主人公", "Huh... ｛Masaki＊＊｝!?");
            Character_ChFace(0, 0, 10);
            Character_Chara_GS2(8, "M8_??F", 0);
            Music_PlayBGM(0, "MN_C_08_000_D02", 127, 40);
            Voice_PlayVoice("P5308000_H01000", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "Bingo! You know me well enough.\nSeems like this year's prosperous.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Yeah!\nThis year's mural is so amazing.\nIt's the Art Club members'\nmasterpiece.");
            Character_ChFace(0, 2, 4);
            Character_BlinkStart(8, 2, (#1));
            Voice_PlayVoice("P5308000_H01100", #1, "");
            Message_Who(8);
            Message_MsgDisp("Masaki", "You made it with such fighting\nspirit.\nMy expectations are high!\nOh, you're being called.");
            Message_Who(0);
            Message_MsgDisp("主人公", "Oh, it's time for the display.\nI'm off!");
            }
        Character_Chara_GS2(8, "NON");
        Message_CloseMsg();
        Screen_WipeOut(1);
        System_Wait(90);
        Screen_WipeIn(2);
        Environment_StopME(0, 40);
        Music_StopBGM(0, 40);
        Message_CloseMsg();
        var0 = 54 + 13;
        var0 = Parameter_bunka_jyu(0);
        Graphic_OpenAnim(36, var0);
        Environment_PlayME(0, "", 127, 0);
        }
    System_Call_GS2("P54", "M8", 0);
    }
