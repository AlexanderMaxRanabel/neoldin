package
me.alexandermaxranabel.monotone.module.setting.settings;

import java.util.Arrays;
import java.util.List;

import me.alexandermaxranabel.monotone.Monotone;
import me.alexandermaxranabel.monotone.module.Module;
import me.alexandermaxranabel.monotone.module.setting.Setting;

/** the first mode is the default mode, it has to be declared already as one of the following modes, you can have as many modes as you'd like.
 * @author SrgantMooMoo
 * @since 05/16/2021
 */

public class ModeSetting extends Setting {
	public int index;

	public List<String> modes;

	public ModeSetting(String name, Module parent, String defaultMode, String... modes) {
		this.name = name;
		this.parent = parent;
		this.modes = Arrays.asList(modes);
		this.index = this.modes.indexOf(defaultMode);
	}

	public String getMode() {
		return this.modes.get(this.index);
	}

	public void setMode(String mode) {
		this.index = this.modes.indexOf(mode);

		if (Monotone.INSTANCE.save != null) {
			try {
				Monotone.INSTANCE.save.saveSettings();
			} catch (Exception e) {}
		}
	}

	public boolean is(String mode) {
		return (this.index == this.modes.indexOf(mode));
	}

	public void cycle() {
		if (this.index < this.modes.size() - 1) {
			this.index++;
		} else {
			this.index = 0;
		}

		if (Monotone.INSTANCE.save != null) {
			try {
				Monotone.INSTANCE.save.saveModules();
			} catch (Exception e) {}
		}
	}
}
