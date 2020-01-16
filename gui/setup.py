import setuptools

with open("README.md", "r") as fh:
    long_description = fh.read()

setuptools.setup(
    name="gui_pkg-bweindorf",
    version="0.0.1",
    author="Brandon Weindorf",
    author_email="bjweindorf@gmail.com",
    description="Gui For High Energy Data Analysis",
    long_description=long_description,
    long_description_content_type="text/markdown",
    url="https://github.com/bweindorf/highenergy.git",
    packages=setuptools.find_packages(),
    classifiers=[
        "Programming Language :: Python :: 3",
        "License :: OSI Approved :: MIT License",
        "Operating System :: OS Independent",
    ],
    python_requires='>=3.6',
)